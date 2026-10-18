/* speed.exe 005168d0 FUN_005168d0; analysis pseudocode, not buildable source.
 * calls 005bb720 FUN_005bb720
 * calls 005c12f0 FUN_005c12f0
 * calls 00652ad0 _malloc
 * calls 005b7420 FUN_005b7420
 * calls 005b07d0 FUN_005b07d0
 */

int * __fastcall FUN_005168d0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e394;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = 0;
  pvVar1 = _malloc(0x5250);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005c12f0();
  }
  *param_1 = iVar2;
  *(undefined4 *)(iVar2 + 0x108) = DAT_0091cad4;
  local_4 = 0xffffffff;
  FUN_005b7420(1);
  FUN_005bb720();
  FUN_005b07d0(1);
  *(undefined1 *)(*param_1 + 1) = 1;
  ExceptionList = local_c;
  return param_1;
}

