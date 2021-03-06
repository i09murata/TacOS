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
 * fs/fsDef.h : ファイルシステム内部と外部公開の両方で使用される構造体、定数
 *
 * 2015.11.17 : APPEND_MODE を追加
 * 2015.09.02 : 名前を fs.h から fsDef.h に変更
 *              外部公開専用の定数は fs.h(旧 fatFs.h)に移動(重村)
 * 2015.08.19 : ファイルシステムに関するデータ定義集約
 *            : ファイル名を変更(dirEnt.h -> fs.h)
 * 2014.10.21 : DIR 構造体に name フィールドと ext フィールドを追加
 * 2014.08.25 : READ/WRITE は mmcspi.cmm で定義されていたため語尾に _MODE を追加
 * 2014.06.03 : 村田開発開始
 * 2011.05.27 : 新規作成
 *
 * $Id$
 *
 */

#ifndef FSDEF_H

#define BLKSIZ    512              // 1セクタのバイト数
#define FILEMAX   20               // 同時にオープンできるファイルの最大数
#define P_OPENMAX 5                // 1プロセス当たりのオープンできるファイル数

// クラスタ番号に関する定義
#define UNASSIGN  0x0000           // 未割り当てを表すクラスタ番号
#define ROOTDIR   0x0001           // ルートディレクトリを表すクラスタ番号

// ファイルのオープンモードに関する定義
#define READ_MODE   0x0000         // オープンモード(READ)
#define WRITE_MODE  0x0001         // オープンモード(WRITE)
#define APPEND_MODE 0x0002         // オープンモード(APPEND)

#define FSDEF_H
#endif
