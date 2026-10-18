/* speed.exe 00747b10 FUN_00747b10; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00747b10(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  puVar1 = (undefined4 *)*param_1;
  local_8 = -1;
  do {
    if (puVar1 == param_1) {
      return -1;
    }
    piVar2 = (int *)puVar1[0xd];
    piVar3 = (int *)(puVar1[0xe] * 0xe + (int)piVar2);
    for (; piVar2 < piVar3; piVar2 = (int *)((int)piVar2 + 0xe)) {
      local_8 = local_8 + 1;
      if ((((param_2 == 0) ||
           (*(int *)(DAT_009b09c4 + (uint)*(byte *)((int)piVar2 + 7) * 4) == param_2)) &&
          ((param_3 == -1 || ((char)piVar2[1] == param_3)))) &&
         ((param_4 == 0 || (*piVar2 == param_4)))) {
        return local_8;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

