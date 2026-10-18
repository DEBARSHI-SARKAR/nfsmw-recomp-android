/* speed.exe 006ee360 FUN_006ee360; analysis pseudocode, not buildable source.
 * calls 0056bc60 FUN_0056bc60
 * calls 005d59f0 FUN_005d59f0
 * calls 00727480 FUN_00727480
 */

void __fastcall FUN_006ee360(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  pfVar1 = (float *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x10))();
  fStack_20 = pfVar1[2];
  fStack_1c = -*pfVar1;
  fStack_18 = pfVar1[1];
  iVar2 = FUN_00727480(&fStack_20,0xb,0);
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0x30);
  }
  if (iVar5 != *(int *)(param_1 + 0x70)) {
    if (*(int *)(param_1 + 0x74) != 0) {
      piVar3 = (int *)FUN_005d59f0(&LAB_005650b0);
      if ((piVar3 != (int *)0x0) && (iVar5 != 0)) {
        uVar4 = FUN_0056bc60(iVar5);
        (**(code **)(*piVar3 + 4))(uVar4,0,0xa19bb14c,0,0,1);
      }
    }
    *(int *)(param_1 + 0x70) = iVar5;
  }
  return;
}

