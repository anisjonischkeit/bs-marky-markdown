MarkyMarkdown.make("# Some Title\nsome text")
|> Js.log2("Output of make is: ");

MarkyMarkdown.(
  make(~options=options(~highlightSyntax=false, ()), "# My Markdown String")
)
|> Js.log2("Output of make with options is: ");

MarkyMarkdown.(
  marky(
    "# My Markdown String",
    ~options=MarkyMarkdown.options(~highlightSyntax=false, ()),
    (),
  )
)
|> Js.log2("Output of marky with options is: ");