/* speed.exe 0079a020 FUN_0079a020; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083a980 FUN_0083a980
 * calls 00465a70 FUN_00465a70
 * calls 007970b0 FUN_007970b0
 * calls 007ec1bd FUN_007ec1bd
 * calls 00796d30 FUN_00796d30
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_0079a020(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_00796d30();
  if (1 < *(int *)(DAT_0091cf90 + 0x19c)) {
    if (*(int *)(iVar1 + 0x230) == 0) {
      puVar2 = (undefined1 *)FUN_00465a70(0x84,8);
      *(undefined1 **)(iVar1 + 0x230) = puVar2;
      *puVar2 = 0;
    }
    FUN_0083a980(*(undefined4 *)(iVar1 + 0x230),0x80,&DAT_008b6cb4,1);
    FUN_007970b0();
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

