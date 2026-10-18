/* speed.exe 008405d0 FUN_008405d0; analysis pseudocode, not buildable source.
 */

void FUN_008405d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((-1 < param_3) && (param_3 < 6)) {
    local_18 = param_2;
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_5;
    local_8 = param_6;
    local_4 = 0;
    puVar1 = (undefined4 *)(param_1 + 0x18a4);
    iVar2 = 0x20;
    do {
      if (puVar1[-1] == param_3) {
        (*(code *)*puVar1)(param_1,&local_18,puVar1[1]);
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

