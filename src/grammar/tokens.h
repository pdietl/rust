// Copyright 2015 The Rust Project Developers. See the COPYRIGHT
// file at the top-level directory of this distribution and at
// http://rust-lang.org/COPYRIGHT.
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.

enum Token {
  SHL = 257, // Parser generators reserve 0-256 for char literals
  SHR,
  LE,
  EQEQ,
  NE,
  GE,
  ANDAND,
  OROR,
  SHLEQ,
  SHREQ,
  MINUSEQ,
  ANDEQ,
  OREQ,
  PLUSEQ,
  STAREQ,
  SLASHEQ,
  CARETEQ,
  PERCENTEQ,
  DOTDOT,
  DOTDOTDOT,
  MOD_SEP,
  LARROW,
  RARROW,
  FAT_ARROW,
  LIT_BYTE,
  LIT_CHAR,
  LIT_INTEGER,
  LIT_FLOAT,
  LIT_STR,
  LIT_STR_RAW,
  LIT_BYTE_STR,
  LIT_BYTE_STR_RAW,
  IDENT,
  UNDERSCORE,
  LIFETIME,

  // keywords
  SELF,
  STATIC,
  ABSTRACT,
  ALIGNOF,
  AS,
  BECOME,
  BREAK,
  CATCH,
  CRATE,
  DEFAULT,
  DO,
  ELSE,
  ENUM,
  EXTERN,
  FALSE,
  FINAL,
  FN,
  FOR,
  IF,
  IMPL,
  IN,
  LET,
  LOOP,
  MACRO,
  MATCH,
  MOD,
  MOVE,
  MUT,
  OFFSETOF,
  OVERRIDE,
  PRIV,
  PUB,
  PURE,
  REF,
  RETURN,
  SIZEOF,
  STRUCT,
  SUPER,
  UNION,
  TRUE,
  TRAIT,
  TYPE,
  UNSAFE,
  UNSIZED,
  USE,
  VIRTUAL,
  WHILE,
  YIELD,
  CONTINUE,
  PROC,
  BOX,
  CONST,
  WHERE,
  TYPEOF,
  INNER_DOC_COMMENT,
  OUTER_DOC_COMMENT,

  SHEBANG,
  SHEBANG_LINE,
  STATIC_LIFETIME
};