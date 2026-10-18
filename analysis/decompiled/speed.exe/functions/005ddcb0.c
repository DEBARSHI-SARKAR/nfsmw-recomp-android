/* speed.exe 005ddcb0 FUN_005ddcb0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005ddcb0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  do {
    if (param_3 == 0) {
      return;
    }
    uVar2 = 0;
    if (*(uint *)(param_1 + 0xac) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0xb0);
      do {
        if (puVar1[1] == param_2[1]) {
          *puVar1 = *param_2;
          puVar1[1] = param_2[1];
          puVar1[2] = param_2[2];
          puVar1[3] = param_2[3];
          puVar1[4] = param_2[4];
          break;
        }
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 5;
      } while (uVar2 < *(uint *)(param_1 + 0xac));
    }
    param_2 = param_2 + 5;
    param_3 = param_3 + -1;
  } while( true );
}

