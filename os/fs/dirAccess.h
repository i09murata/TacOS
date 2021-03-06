/*
 * TacOS Source Code
 *    Tokuyama kousen Advanced educational Computer.
 *
 * Copyright (C) 2011 - 2016 by
 *                      Dept. of Computer Science and Electronic Engineering,
 *                      Tokuyama College of Technology, JAPAN
 *
 *   上記著作権者は，Free Software Foundation によって公開されている GNU 一般公
 * 衆利用許諾契約書バージョン２に記述されている条件を満たす場合に限り，本ソース
 * コード(本ソースコードを改変したものを含む．以下同様)を使用・複製・改変・再配
 * 布することを無償で許諾する．
 *
 *   本ソースコードは＊全くの無保証＊で提供されるものである。上記著作権者および
 * 関連機関・個人は本ソースコードに関して，その適用可能性も含めて，いかなる保証
 * も行わない．また，本ソースコードの利用により直接的または間接的に生じたいかな
 * る損害に関しても，その責任を負わない．
 *
 *
 */

/*
 * fs/dirAccess.h : dirAccess.cmm の外部インタフェース
 *
 * 2016.01.18 : 構造体宣言をアッパーキャメルケースに統一
 * 2015.12.01 : 新規作成
 *
 * $Id$
 *
 */

// DIR エントリを表現するデータ構造
struct DirEnt {                                 // DIR エントリを表す構造体
  int    dirClst;                               // DIR FILE の先頭クラスタ番号
  int    dirEnt;                                // DIR エントリのエントリ番号
  char[] name;                                  // ファイル名("abcdefghtxt"形式)
  int    attr;                                  // ファイルの属性
  int    clst;                                  // ファイルの開始クラスタ番号
  int    lenH;                                  // ファイルサイズ(上位)
  int    lenL;                                  // ファイルサイズ(下位)
};

public void flushDirEnt();
public int readDirEnt(DirEnt dirEnt);
public void writeDirEnt(DirEnt dirEnt);
public int initDirEnt(int clst);
public boolean nextDirEnt(DirEnt dirEnt, boolean flag);
public boolean newDirEnt(DirEnt dirEnt);

