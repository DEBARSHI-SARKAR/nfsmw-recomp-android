/* speed.exe 00796c20 FUN_00796c20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00794f80 FUN_00794f80
 * calls 00460c70 FUN_00460c70
 * calls 0078fbc0 FUN_0078fbc0
 * calls 00794790 FUN_00794790
 */

void FUN_00796c20(undefined4 param_1,int param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    piVar2 = (int *)FUN_00794790();
    if ((((*piVar2 != 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) && (piVar2[0x21] < 4))
    {
      FUN_00460c70(piVar2 + piVar2[0x21] * 8 + 1,param_3);
      piVar2[0x21] = piVar2[0x21] + 1;
    }
  }
  *param_3 = '\0';
  iVar3 = FUN_00794f80();
  iVar1 = *(int *)(iVar3 + 0x40);
  if (iVar1 != 0) {
    if (*(code **)(iVar1 + 0x18) != (code *)0x0) {
      (**(code **)(iVar1 + 0x18))(param_2,*(undefined4 *)(iVar1 + 0x1c));
    }
    iVar1 = *(int *)(iVar3 + 0x40);
    if (iVar1 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar1);
    }
    *(undefined4 *)(iVar3 + 0x40) = 0;
  }
  return;
}

