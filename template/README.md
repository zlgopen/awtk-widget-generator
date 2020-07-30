# awtk-widget-template

template 控件。

![](docs/images/ui.jpg)

## 准备

1. 获取 awtk 并编译

```
git clone https://github.com/zlgopen/awtk.git
cd awtk; scons; cd -
```

## 运行

1. 生成示例代码的资源

```
python scripts/update_res.py all
```
> 也可以使用 Designer 打开项目，之后点击 “打包” 按钮进行生成
> 如果资源发生修改，则需要重新生成资源。



2. 编译

* 编译选项

```
Usage: scons SHARED=[true|false] IDL_DEF=[true|false] LCD=[800_480|...] LINUX_FB[true|false] THEME=[theme] LANGUAGE=[lang] FONT=[font]
```

* 参数 SHARED 是可选的，用于指定是否编译生成动态库，缺省为 true。

* 参数 IDL_DEF 是可选的，用于指定编译前是否重新生成 idl.json 和 def 文件，缺省为 true。

* 参数 LCD 是可选的，用于指定示例程序运行时的 LCD 尺寸，格式为“height_width”。

* 参数 LINUX_FB 是可选的，是否编译 linux framebuffer 版本。

* 参数 FONT 是可选的，用于指定字体（如缺省为 default)。

* 参数 THEME 是可选的，用于指定主题（如缺省为 default)。

* 参数 LANGUAGE 是可选的，用于指定语言（如缺省为 zh_CN)。

> 注意：编译前先确定 SConstruct 文件中的 awtk_root 为 awtk 所在目录，否则会编译失败。

* 示例

> 缺省编译

```
scons
```

> 指定 LCD 大小

```
scons LCD=480_272
```

> 编译 linux fb 版本
```
scons LINUX_FB=true
```

3. 运行

```
./bin/demo
```

## 文档

[完善自定义控件](https://github.com/zlgopen/awtk-widget-generator/blob/master/docs/improve_generated_widget.md)
