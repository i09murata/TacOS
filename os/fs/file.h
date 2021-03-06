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
 * fs/file.h : file.cmm の外部インタフェース
 *
 * 2016.01.18 : 構造体宣言をアッパーキャメルケースに統一
 * 2011.12.01 : 新規作成
 *
 * $Id$
 *
 */

// オープンファイルを表現するデータ構造
struct File {                                   // オープンファイルを表す構造体
  // 不変な情報
  boolean isDir;                                // ディレクトリかどうか
  int     mode;                                 // オープンモード
  int     lenH;                                 // ファイルサイズ(上位16bit)
  int     lenL;                                 // ファイルサイズ(下位16bit)
  int     clst;                                 // 先頭クラスタ番号
  int     dirClst;                              // DIR FILE のクラスタ#
  int     dirEnt;                               // DIR FILE のエントリ#

  // 現在の情報
  int     posH;                                 // 参照位置の上位バイト位置
  int     posL;                                 // 参照位置の下位バイト位置
  int     posClst;                              // バッファ中のクラスタ#
  int     posSct;                               // バッファ中のセクタ#
  char[]  fileBuf;                              // ファイルごとのバッファ
  boolean isEob;                                // セクタの境界にあるかどうか
  boolean fileIsDirty;                          // ダーティーフラグ
};

public int putByteFile(File f, char ch);
public int getByteFile(File f);
public void seekFile(File f, int posH, int posL);
public void flushBuf(File f);
