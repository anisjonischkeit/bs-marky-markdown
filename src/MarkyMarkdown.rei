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
  headingSvgClass: array(string) 
};
[@bs.module] external marky : (string, ~options: options=?, unit) => string = "marky-markdown";
