/* speed.exe 007bb560 FUN_007bb560; analysis pseudocode, not buildable source.
 * calls 00586fa0 FUN_00586fa0
 * calls 00573960 FUN_00573960
 * calls 007a50e0 FUN_007a50e0
 * calls 00575b00 FUN_00575b00
 * calls 007bad10 FUN_007bad10
 * calls 00652ad0 _malloc
 */

int __thiscall
FUN_007bb560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883654;
  local_c = ExceptionList;
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) || (ExceptionList = &local_c, DAT_009b9e8d != '\0')
     ) {
    ExceptionList = &local_c;
    cVar2 = FUN_00575b00();
    if (cVar2 != '\0') {
      cVar2 = FUN_007bad10(param_5,1);
      if (cVar2 != '\0') {
        ExceptionList = local_c;
        return -1;
      }
    }
  }
  puVar3 = _malloc(0x58);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x150);
    FUN_00586fa0(param_3,param_4,0);
    *puVar3 = &PTR_FUN_008b7558;
    puVar3[0x13] = param_2;
    puVar3[0x15] = 1;
    puVar3[0x14] = iVar1 << 0x10 | param_5;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar3);
  cVar2 = FUN_007bad10(param_5,0);
  if (cVar2 == '\0') {
    cVar2 = FUN_007a50e0(param_5);
    if (cVar2 != '\0') {
      puVar3[0x15] = 3;
    }
  }
  else {
    puVar3[0x15] = 2;
  }
  ExceptionList = local_c;
  return *(int *)(param_1 + 0x50) + -3;
}

