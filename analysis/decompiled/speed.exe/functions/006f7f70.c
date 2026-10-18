/* speed.exe 006f7f70 FUN_006f7f70; analysis pseudocode, not buildable source.
 * calls 006f6a30 FUN_006f6a30
 */

void __thiscall FUN_006f7f70(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  piVar1 = *(int **)(param_1 + 0x18);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = param_2;
  FUN_006f6a30(&param_2,*(undefined4 *)(param_1 + 0x14),piVar1,&local_10,0);
  uVar3 = param_3;
  piVar4 = param_2;
  if (param_2 != piVar1) {
    do {
      if ((int *)*piVar4 != piVar2) {
        return;
      }
      (*(code *)**(undefined4 **)piVar4[1])(uVar3);
      piVar4 = piVar4 + 4;
    } while (piVar4 != *(int **)(param_1 + 0x18));
  }
  return;
}

