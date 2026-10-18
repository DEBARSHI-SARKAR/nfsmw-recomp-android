/* speed.exe 007937e0 FUN_007937e0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078be70 FUN_0078be70
 * calls 0083a670 FUN_0083a670
 * calls 0083abc0 FUN_0083abc0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

bool FUN_007937e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_0078be70(param_1);
  bVar3 = false;
  if (iVar1 != 0) {
    uVar2 = FUN_0083a670(iVar1 + 0x1c,&DAT_008b6cb4,0);
    iVar1 = FUN_0083abc0(uVar2);
    bVar3 = iVar1 != 0;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return bVar3;
}

