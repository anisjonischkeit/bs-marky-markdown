[@bs.deriving abstract]
type options = {
  [@bs.optional]
  sanitize: bool,
  [@bs.optional]
  nofollow: bool,
  [@bs.optional]
  linkify: bool,
  [@bs.optional]
  highlightSyntax: bool,
  [@bs.optional]
  prefixHeadingIds: bool,
  [@bs.optional]
  enableHeadingLinkIcons: bool,
  [@bs.optional]
  serveImagesWithCDN: bool,
  [@bs.optional]
  debug: bool,
  [@bs.optional]
  headingAnchorClass: string,
  [@bs.optional]
  headingSvgClass: array(string),
};

[@bs.module]
external make: (string, ~options: options=?, unit) => string =
  "@npmcorp/marky-markdown";

[@ocaml.deprecated "Use make instead."]
let marky = make;

let make = (~options=?, markdown) => marky(markdown, ~options?, ());

