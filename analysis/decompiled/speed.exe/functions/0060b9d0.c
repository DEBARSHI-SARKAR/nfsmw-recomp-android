/* speed.exe 0060b9d0 FUN_0060b9d0; analysis pseudocode, not buildable source.
 */

void FUN_0060b9d0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x48);
  while ((puVar1 != (undefined4 *)0x0 && (puVar2 = (undefined4 *)puVar1[2], param_2 <= puVar2))) {
    puVar1[3] = *puVar2;
    puVar1[4] = puVar2[1];
    puVar1[2] = puVar1 + 3;
    puVar1 = (undefined4 *)*puVar1;
    *(undefined4 **)(param_1 + 0x48) = puVar1;
  }
  return;
}

