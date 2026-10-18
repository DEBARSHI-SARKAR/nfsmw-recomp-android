/* speed.exe 00614340 FUN_00614340; analysis pseudocode, not buildable source.
 * calls 00614240 FUN_00614240
 * calls 00608510 FUN_00608510
 * calls 00613880 FUN_00613880
 */

void __fastcall FUN_00614340(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int in_EAX;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int unaff_EDI;
  undefined4 local_4;
  
  if (param_2[3] == 0) {
    iVar2 = FUN_00608510(param_2[1],param_1,in_EAX * unaff_EDI);
    if (iVar2 != 0) {
      FUN_00613880(*param_2,"unexpected end of file in %s",param_2[4]);
    }
  }
  else if (in_EAX != 0) {
    puVar4 = (undefined1 *)(param_1 + unaff_EDI + -1);
    iVar2 = unaff_EDI;
    local_4 = in_EAX;
    puVar3 = puVar4;
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar1 = FUN_00614240();
        *puVar4 = uVar1;
        puVar4 = puVar4 + -1;
      }
      puVar4 = puVar3 + unaff_EDI;
      local_4 = local_4 + -1;
      iVar2 = unaff_EDI;
      puVar3 = puVar4;
    } while (local_4 != 0);
    return;
  }
  return;
}

