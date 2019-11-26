# bs-marky-markdown

[marky-markdown](http://npm.im/marky-markdown) bindings for [BuckleScript](https://bucklescript.github.io) in [Reason](https://reasonml.github.io).

Has only been tested in the browser.

# Installation

```
npm i bs-marky-markdown -s
```

# Usage

## Basic usage

```reasonml
let htmlStr = MarkyMarkdown.make("# My Markdown String")
```

## With Options

```reasonml
let htmlStr = MarkyMarkdown.(
  make(~options=options(~highlightSyntax=false, ()), "# My Markdown String")
)

```

# Available Options

- [x] sanitize: bool
- [x] nofollow: bool
- [x] linkify: bool
- [x] highlightSyntax: bool
- [x] prefixHeadingIds: bool
- [x] enableHeadingLinkIcons: bool
- [x] serveImagesWithCDN: bool
- [x] debug: bool
- [ ] package (what even is this??)
- [x] headingAnchorClass: string
- [x] headingSvgClass: array(string)
