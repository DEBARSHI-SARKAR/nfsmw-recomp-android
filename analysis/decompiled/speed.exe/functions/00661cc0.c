/* speed.exe 00661cc0 FUN_00661cc0; analysis pseudocode, not buildable source.
 * calls 0065ac70 FUN_0065ac70
 * calls 007ecfec FUN_007ecfec
 * calls 006610b0 FUN_006610b0
 * calls 007c66d0 _malloc
 */

undefined4 * FUN_00661cc0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a1fb;
  local_c = ExceptionList;
  if (DAT_00925920 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar2 = _malloc(0x81c);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      DAT_00925920 = (undefined4 *)0x0;
    }
    else {
      puVar3 = puVar2;
      FUN_007ecfec("discu:");
      *puVar2 = &PTR_FUN_008a8a24;
      DAT_00925920 = puVar2;
      puVar2 = puVar3;
    }
    local_4 = 0xffffffff;
    cVar1 = FUN_006610b0(param_1,param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return DAT_00925920;
    }
    if (DAT_00925920 != (undefined4 *)0x0) {
      (**(code **)*DAT_00925920)(1,puVar2);
    }
    DAT_00925920 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

