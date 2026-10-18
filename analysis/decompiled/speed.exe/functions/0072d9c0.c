/* speed.exe 0072d9c0 FUN_0072d9c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00465a70 FUN_00465a70
 * calls 0072d670 FUN_0072d670
 */

void __thiscall FUN_0072d9c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880604;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x83c) = param_2;
  uVar1 = FUN_00465a70(param_2,0x2000);
  *(undefined4 *)(param_1 + 0x838) = uVar1;
  pvVar2 = _malloc(0x2750);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0072d670(*(undefined4 *)(param_1 + 0x838),*(undefined4 *)(param_1 + 0x83c),
                         "Track Streaming",7);
  }
  *(undefined4 *)(param_1 + 0x844) = uVar1;
  ExceptionList = local_c;
  return;
}

