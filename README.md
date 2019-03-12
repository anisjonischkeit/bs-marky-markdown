# bs-marky-markdown

Bucklescript bindings for marky-markdown.

Has only been tested in the browser.

# Installation

```
npm i bs-marky-markdown -s
```

# Usage

## Basic usage

```reasonml
MarkyMarkdown.marky("# My Markdown String", ())
```

## With Options

```reasonml
MarkyMarkdown.marky(
    "# My Markdown String", 
    ~options=MarkyMarkdown.options(
        ~highlightSyntax=false, 
        ()
    ), 
    ()
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
