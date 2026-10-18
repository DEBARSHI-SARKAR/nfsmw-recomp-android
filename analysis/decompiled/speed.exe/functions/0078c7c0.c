/* speed.exe 0078c7c0 FUN_0078c7c0; analysis pseudocode, not buildable source.
 * calls 004ae8f0 FUN_004ae8f0
 * calls 00837690 FUN_00837690
 * calls 008375e0 FUN_008375e0
 * calls 00572e80 FUN_00572e80
 * calls 0083b210 FUN_0083b210
 * calls 0083a670 FUN_0083a670
 * calls 008371a0 FUN_008371a0
 */

void __thiscall FUN_0078c7c0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  uVar4 = 0;
  local_24 = 0;
  if (*param_2 == 0x63686174) {
    uVar4 = 0;
    local_24 = 1;
    FUN_004ae8f0(0x56);
  }
  else if (*param_2 == 0x696e7674) {
    uVar4 = 3;
    local_24 = 1;
  }
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_20 = 0;
  local_1 = 0;
  uVar1 = FUN_0083a670(param_2[5],&DAT_008b68c4,&local_20,0x20,"unknown sender");
  FUN_0083b210(uVar1);
  if ((*(int *)(param_1 + 0xf8) != 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) {
    iVar2 = FUN_00837690(*(int *)(param_1 + 0xf8),&local_20);
    if (iVar2 != 0) {
      iVar3 = FUN_008371a0(iVar2);
      if (iVar3 != 0) {
        FUN_008375e0(iVar2,0);
        return;
      }
    }
  }
  FUN_00572e80(uVar4,local_24);
  DAT_0091ca90 = 1;
  return;
}

