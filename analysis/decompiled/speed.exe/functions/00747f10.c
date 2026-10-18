/* speed.exe 00747f10 FUN_00747f10; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 004647c0 FUN_004647c0
 */

void __thiscall FUN_00747f10(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_40 [64];
  
  if ((param_2 < 1) || (4 < param_2)) {
    if ((param_2 < 5) || (0xc < param_2)) {
      *(undefined1 *)((int)param_1 + 7) = 0;
    }
    else {
      *(undefined1 *)((int)param_1 + 7) = 2;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 7) = 1;
  }
  FUN_004647c0(local_40,"DUMMY_SKIN%d",param_2);
  uVar1 = FUN_00460bf0(local_40);
  param_1[0xf] = -(uint)(*(char *)(*param_1 * 0xd0 + 199 + DAT_009b09d8) != '\0') & uVar1;
  FUN_004647c0(local_40,"DUMMY_WHEEL%d",param_2);
  iVar2 = FUN_00460bf0(local_40);
  param_1[0x10] = iVar2;
  FUN_004647c0(local_40,"DUMMY_SPINNER%d",param_2);
  iVar2 = FUN_00460bf0(local_40);
  param_1[0x11] = iVar2;
  return;
}

