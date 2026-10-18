/* speed.exe 005b8120 FUN_005b8120; analysis pseudocode, not buildable source.
 * calls 005b1140 FUN_005b1140
 * calls 005b7de0 FUN_005b7de0
 */

void __thiscall FUN_005b8120(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x18) < 0x100) {
    if ((char)param_3 == '\0') {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10);
    }
    else {
      puVar2 = &local_c;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
    }
    cVar1 = FUN_005b1140(param_2,puVar2);
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
    }
    FUN_005b7de0(1,param_2,param_3);
  }
  return;
}

