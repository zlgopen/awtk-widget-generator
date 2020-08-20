
# 1 编译选项

## 介绍

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


## 示例：

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

