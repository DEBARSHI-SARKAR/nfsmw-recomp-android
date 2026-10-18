/* speed.exe 00585520 FUN_00585520; analysis pseudocode, not buildable source.
 * calls 00571d60 FUN_00571d60
 * calls 005af1c0 FUN_005af1c0
 */

void __thiscall FUN_00585520(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_2 + 0x40) = param_1;
  DAT_0091d218 = DAT_0091d218 + 1;
  if ((((**(int **)(param_1 + 0x18) == 0x30203) &&
       (piVar1 = *(int **)(param_1 + 0x14), *piVar1 == -0x1891baba)) && (piVar1[2] == 0x64486b50))
     && (0x1ffff < (uint)piVar1[4])) {
    FUN_005af1c0(piVar1 + 10);
  }
  uVar2 = FUN_00571d60(param_2,param_3);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x20);
  DAT_0091d218 = DAT_0091d218 + -1;
  return;
}

