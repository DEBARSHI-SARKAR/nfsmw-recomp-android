/* speed.exe 00615000 FUN_00615000; analysis pseudocode, not buildable source.
 * calls 00613eb0 FUN_00613eb0
 */

void __fastcall FUN_00615000(undefined4 *param_1)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  int unaff_EDI;
  
  switch(in_EAX) {
  case 1:
  case 3:
    iVar1 = *(int *)(unaff_EDI + 8);
    *param_1 = *(undefined4 *)(iVar1 + -8);
    param_1[1] = *(undefined4 *)(iVar1 + -4);
    break;
  case 4:
    *param_1 = 4;
    uVar2 = FUN_00613eb0();
    param_1[1] = uVar2;
    *(undefined4 **)(unaff_EDI + 8) = param_1 + 2;
    return;
  case 5:
    *param_1 = 4;
    uVar2 = FUN_00613eb0();
    param_1[1] = uVar2;
    *(undefined4 **)(unaff_EDI + 8) = param_1 + 2;
    return;
  }
  *(undefined4 **)(unaff_EDI + 8) = param_1 + 2;
  return;
}

