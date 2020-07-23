
# 完善生成的代码

## 1. 完善控件的实现

根据自己的需要完善 src 目录下的程序。
> 关于自定义控件的更多说明，请参考 [自定义控件规范](https://github.com/zlgopen/awtk/blob/master/docs/custom_widget_rules.md)

## 2. 完善测试程序

根据自己的需要完善 tests 目录下 xxx_test.cc。xxx 是实际控件的类型名。

## 3. 完善demo的控件 style

根据自己的需要完善 design/default/styles/main.xml

如二维码控件的 style 改为：

```xml
<qr>
  <style name="default" >
    <normal fg_color="black" bg_color="white"/>
    <scanned fg_color="gray" bg_color="#f0f0f0"/>
  </style>
</qr>
```
> 也可以使用 Designer 打开项目，之后打开该文件进行编辑。

## 4. 完善 demo 的 ui 文件

根据自己的需要完善 design/default/ui/main.xml

如二维码控件的 ui 改为：

```xml
<window theme="main" >
  <qr x="c" y="m" w="240" h="240" text="https://github.com/zlgopen/awtk" />
  <button x="c" y="b:30" w="80" h="30" name="close" text="Close"/>
</window>
```
> 也可以使用 Designer 打开项目，之后打开该文件进行编辑。

## 5. 完善 demo

根据自己的需要完善 demos/main.c

## 6. 编译运行

* 生成demo的资源

可以使用资源生成工具 update_res.py 生成资源，更多信息请参考 [资源生成工具](../template/scripts/README.md)

```
python scripts/update_res.py all
```
> 也可以使用 Designer 打开项目，之后点击 “打包” 按钮进行生成
> 注意：如果资源发生修改，需要重新生成资源。

* 编译

```
Usage: scons SHARED[true|false] IDL_DEF[true|false] LCD[800_480|...]
Example:
scons SHARED=false
scons IDL_DEF=false
scons LCD=480_272
scons SHARED=false IDL_DEF=false LCD=480_272
```
参数 SHARED 是可选的，用于指定是否编译生成动态库，缺省为true。
参数 IDL_DEF 是可选的，用于指定编译前是否重新生成idl.json和def文件，缺省为true。
参数 LCD 是可选的，用于指定示例程序运行时的LCD尺寸，格式为“height_width”。
> 注意：编译前先确定SConstruct 文件中的 awtk_root 为 awtk 所在目录，否则会编译失败。

* 运行

```
 ./bin/demo
```

## 7. 注意事项

* 修改依赖的AWTK

如果需要依赖其他版本的AWTK，则重新设置AWTK的路径即可。有如下2个地方需要设置：
(1) SConstruct 文件中的 awtk_root；
(2) scripts/update_res.py 文件中的 awtk_root。
设置后，按上述步骤重新编译运行。
比如新的AWTK路径为 C:/AWTK/SDK/awtk，则可以设置如下：
```python
...
def getAwtkRoot():
  awtk_root = 'C:/AWTK/SDK/awtk'
  if not os.path.exists(awtk_root):
    dirnames = ['../awtk', '../../awtk', '../../../awtk']
    for dirname in dirnames:
      if os.path.exists(dirname):
        awtk_root = dirname
        break
  return awtk_root
...
```
