/* speed.exe 0064a8b0 FUN_0064a8b0; analysis pseudocode, not buildable source.
 * calls 00591eb0 FUN_00591eb0
 * calls 0072b130 FUN_0072b130
 * calls 0045d650 FUN_0045d650
 */

undefined4 FUN_0064a8b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  
  if (*param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_0045d650(*param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(iVar1 + 8))(param_1);
    return uVar2;
  }
  ppuVar3 = &PTR_FUN_008f7dd8;
  do {
    iVar1 = (*(code *)*ppuVar3)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
    ppuVar3 = ppuVar3 + 1;
  } while ((int)ppuVar3 < 0x8f7e40);
  return 0;
}

