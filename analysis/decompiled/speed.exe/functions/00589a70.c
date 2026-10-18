/* speed.exe 00589a70 FUN_00589a70; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00514d10 FUN_00514d10
 */

void __thiscall FUN_00589a70(int param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  if (param_2 != '\0') {
    FUN_00514cc0();
    FUN_00514d10(uVar1,0x1ca7c0,1);
    return;
  }
  FUN_00514c70(uVar1);
  FUN_00514d10(uVar1,0x16a259,1);
  return;
}

