
# 完善生成的代码

## 1. 完善控件的实现

根据自己的需要完善 src 目录下的程序。

## 2. 完善测试程序

根据自己的需要完善 tests 目录下 xxx_test.cc。xxx 是实际控件的类型名。

## 3. 完善控件的 style 文件

根据自己的需要完善 assets/default/raw/styles/main.xml

如二维码控件的 style 改为：

```xml
<qr>
  <style name="default" >
    <normal fg_color="black" bg_color="white"/>
    <scanned fg_color="gray" bg_color="#f0f0f0"/>
  </style>
</qr>
```

## 4. 完善 demo 的 ui 文件

根据自己的需要完善 assets/default/raw/ui/main.xml

如二维码控件的 ui 改为：

```xml
<window theme="main" >
  <qr x="c" y="m" w="240" h="240" text="https://github.com/zlgopen/awtk" />
  <button x="c" y="b:30" w="80" h="30" name="close" text="Close"/>
</window>
```

## 5. 完善 demo

根据自己的需要完善 demos/main.c

## 6. 编译运行

* 1. 生成 IDL 和动态库导出符号表

```
. gen.sh
```

* 2. 生成资源

```
python scripts/update_res.py all
```

* 3. 编译

```
scons
```

* 将 awtk.dll 拷贝到 bin 目录

```
 cp ../awtk/bin/awtk.dll bin/
```

* 运行
```
 ./bin/demo_xxx
```

> 把 xxx 换成实际的名称。
