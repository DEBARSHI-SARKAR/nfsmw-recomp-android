/* speed.exe 0078bda0 FUN_0078bda0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 __thiscall FUN_0078bda0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar2 = param_1 + 0x1c;
  if (*(int *)(param_1 + 0x1c) < 0) {
    if (param_2 == 0) {
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return 0xffffffff;
    }
  }
  else if (param_2 == 0) goto LAB_0078bdec;
  iVar2 = param_2;
LAB_0078bdec:
  uVar1 = *(uint *)(iVar2 + 0xc);
  uVar3 = 0xffffffff;
  if ((int)uVar1 < 0) {
    uVar3 = 0;
  }
  else if ((uVar1 & 0x40000000) == 0) {
    if ((uVar1 & 0x20000000) != 0) {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar3;
}

