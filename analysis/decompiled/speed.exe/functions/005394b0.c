/* speed.exe 005394b0 FUN_005394b0; analysis pseudocode, not buildable source.
 * calls 0078c380 FUN_0078c380
 * calls 0079bac0 FUN_0079bac0
 * calls 00537c80 FUN_00537c80
 * calls 0078bcc0 FUN_0078bcc0
 * calls 0079f090 FUN_0079f090
 */

void FUN_005394b0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2[1] == 0) && (param_2[3] == 5)) {
    FUN_0079f090();
    iVar1 = FUN_0078c380(*param_2);
    FUN_0079bac0();
    iVar2 = FUN_0078bcc0();
    if ((iVar2 != 0) && (iVar2 = FUN_0078c380(0), iVar1 == iVar2)) {
      *(undefined1 *)(param_3 + 0x11a7) = 1;
      FUN_00537c80();
      return;
    }
  }
  return;
}

