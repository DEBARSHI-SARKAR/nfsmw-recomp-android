/* speed.exe 00791690 FUN_00791690; analysis pseudocode, not buildable source.
 * calls 0078cea0 FUN_0078cea0
 * calls 0078c730 FUN_0078c730
 */

void __thiscall FUN_00791690(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_7c [28];
  undefined4 uStack_c;
  
  uStack_c = param_1[0x1c];
  param_1[0x1b] = (uint)(param_2 != '\0');
  puVar2 = auStack_7c;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0078c730();
  FUN_0078cea0();
  return;
}

