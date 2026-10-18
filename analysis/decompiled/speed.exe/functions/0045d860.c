/* speed.exe 0045d860 FUN_0045d860; analysis pseudocode, not buildable source.
 * calls 007c66a0 __allshr
 */

void FUN_0045d860(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = param_1[1];
  *(char *)((int)param_1 + 7) = (char)*param_1;
  uVar2 = __allshr();
  *(undefined1 *)((int)param_1 + 6) = uVar2;
  uVar2 = __allshr();
  *(undefined1 *)((int)param_1 + 5) = uVar2;
  uVar2 = __allshr();
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(char *)((int)param_1 + 3) = (char)uVar1;
  *(char *)((int)param_1 + 2) = (char)((uint)uVar1 >> 8);
  *(char *)((int)param_1 + 1) = (char)((uint)uVar1 >> 0x10);
  *(char *)param_1 = (char)((uint)uVar1 >> 0x18);
  return;
}

