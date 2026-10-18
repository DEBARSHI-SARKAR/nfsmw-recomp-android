/* speed.exe 005899f0 FUN_005899f0; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00514d10 FUN_00514d10
 */

void __thiscall FUN_005899f0(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  
  if (param_3 == '\0') {
    if (param_2 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x48);
    }
    else {
      if (param_2 != 2) {
        return;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
    }
    FUN_00514c70(uVar1);
    FUN_00514d10(uVar1,0x16a259,1);
  }
  else {
    if (param_2 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x48);
      FUN_00514cc0(uVar1);
      FUN_00514d10(uVar1,0x1ca7c0,1);
      return;
    }
    if (param_2 == 2) {
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      FUN_00514cc0(uVar1);
      FUN_00514d10(uVar1,0x1ca7c0,1);
      return;
    }
  }
  return;
}

