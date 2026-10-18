/* speed.exe 0076e2d0 FUN_0076e2d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void __thiscall FUN_0076e2d0(int param_1,char param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 != '\0') && (*(int *)(param_1 + 8) == 0)) {
    puVar1 = _malloc(0x810);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0xffffffff;
      puVar1[2] = 0x20;
      *(char *)(param_1 + 0x55) = param_2;
      *(undefined4 **)(param_1 + 8) = puVar1;
      return;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(char *)(param_1 + 0x55) = param_2;
  return;
}

