
# 1 编译选项

## 安装 nodejs

由于生成 def 文件，需要用到 [nodejs](https://nodejs.org/en/download/)，请先安装 nodejs，并安装相关模块：

```
npm install -g glob
```

## 介绍

```
Usage: scons SHARED=[true|false] IDL_DEF=[true|false] LCD=[800_480|...] LINUX_FB[true|false] THEME=[theme] LANGUAGE=[lang] FONT=[font]
```

* 参数 SHARED 是可选的，用于指定是否编译生成动态库，缺省为 true。

* 参数 IDL\_DEF 是可选的，用于指定编译前是否重新生成 idl.json 和 def 文件，缺省为 true。

* 参数 LCD 是可选的，用于指定示例程序运行时的 LCD 尺寸，格式为“height\_width”。

* 参数 LINUX\_FB 是可选的，是否编译 linux framebuffer 版本。

* 参数 FONT 是可选的，用于指定字体（如缺省为 default)。

* 参数 THEME 是可选的，用于指定主题（如缺省为 default)。

* 参数 LANGUAGE 是可选的，用于指定语言（如缺省为 zh\_CN)。

> 注意：编译前先确定 SConstruct 文件中的 awtk\_root 为 awtk 所在目录，否则会编译失败。

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

## 编译 linux-fb 版本需要按下列步骤进行

* 编译 awtk，生成 fontgen 之类的工具。

> 这些工具在 PC 上运行，无需交叉编译，编译一次即可。

* 编译 awtk-linux-fb

> 根据自己的情况配置交叉编译工具，编译一次即可。

* 编译自己的项目

```
scons LINUX_FB=true
```
