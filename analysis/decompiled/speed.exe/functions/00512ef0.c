/* speed.exe 00512ef0 FUN_00512ef0; analysis pseudocode, not buildable source.
 * calls 0079bac0 FUN_0079bac0
 * calls 0079df40 FUN_0079df40
 * calls 0056e300 FUN_0056e300
 */

void __thiscall FUN_00512ef0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x35) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    if (*(char *)(param_1 + 0x34) == '\0') {
      *(undefined1 *)(param_1 + 0x2d) = 0;
      *(undefined1 *)(param_1 + 0x2f) = 1;
    }
    return;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar2 = 0;
    uVar1 = 0;
    FUN_0079bac0(0,0);
    FUN_0079df40(uVar1,uVar2);
    return;
  }
  *(undefined1 *)(param_1 + 0x36) = 1;
  FUN_0056e300();
  return;
}

