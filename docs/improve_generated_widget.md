
# 完善生成的代码

## 1. 完善控件的实现

根据自己的需要完善 src 目录下的程序。
> 关于注释规则，请参考 [API 注释格式](https://github.com/zlgopen/awtk/blob/master/docs/api_doc.md)

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

* 1. 生成 IDL 和 动态库导出符号表

```
. gen.sh
```
> 注意: 如果执行失败，请确定gen.sh中的 awtk 路径是否正确

* 2. 生成资源

可以使用资源生成工具 update_res.py 生成资源，更多信息请参考 [资源生成工具](../template/scripts/README.md)

```
python scripts/update_res.py all
```
> 也可以使用 Designer 打开项目，之后点击 “打包” 按钮进行生成
> 注意：如果资源发生修改，需要重新生成资源。

* 3. 编译

```
scons
```
> 注意：
> 编译前先确认 SConstruct 文件中的 awtk_root 是否为 awtk 所在目录，不是则修改。
> 默认使用动态库的形式，如果需要使用静态库，修改 SConstruct 文件中的 BUILD_SHARED = 'false' 即可。


* 运行
```
 ./bin/demo
```
