/* speed.exe 005b8390 FUN_005b8390; analysis pseudocode, not buildable source.
 * calls 005b1280 FUN_005b1280
 * calls 005b7fe0 FUN_005b7fe0
 */

void __thiscall FUN_005b8390(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x18) < 0x100) {
    if ((char)param_3 == '\0') {
      puVar2 = *(undefined4 **)(param_1 + 0x2c);
    }
    else {
      puVar2 = &local_10;
      local_4 = 0;
      local_8 = 0;
      local_c = 0;
      local_10 = 0;
    }
    cVar1 = FUN_005b1280(param_2,puVar2);
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
    }
    FUN_005b7fe0(0,param_2,param_3);
  }
  return;
}

