/* speed.exe 006dc590 FUN_006dc590; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

int __fastcall FUN_006dc590(int param_1)

{
  int iVar1;
  undefined4 *puStack_280;
  undefined4 uStack_27c;
  int *piStack_278;
  undefined4 **ppuStack_274;
  int *piStack_270;
  undefined1 *puStack_26c;
  undefined4 *puStack_268;
  char *pcStack_264;
  int *piStack_260;
  int iStack_25c;
  undefined1 *puStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  
  uStack_250 = 1;
  uStack_254 = 0;
  puStack_258 = &LAB_006d81d0;
  iStack_25c = 4;
  piStack_260 = DAT_00982d14;
  pcStack_264 = (char *)0x6dc5b0;
  iVar1 = (**(code **)(*DAT_00982d14 + 0x10))();
  if (iVar1 < 0) {
    pcStack_264 = "ERROR: could not enumerate devices\n";
    puStack_268 = (undefined4 *)0x6dc5c0;
    FUN_006ca3d0();
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x2220) = DAT_00982904;
  *(undefined4 *)(param_1 + 0x2228) = DAT_0093cc58;
  *(undefined4 *)(param_1 + 0x2230) = DAT_0093d904;
  *(undefined4 *)(param_1 + 0x2224) = DAT_00982908;
  *(undefined4 *)(param_1 + 0x222c) = DAT_0093cc5c;
  *(undefined4 *)(param_1 + 0x2234) = DAT_0093d908;
  if (DAT_0093df00 != (int *)0x0) {
    pcStack_264 = (char *)0x3;
    puStack_268 = &DAT_0093cc34;
    *(int **)(param_1 + 0x2248) = DAT_0093df00;
    puStack_26c = &LAB_006c9e30;
    piStack_270 = DAT_0093df00;
    ppuStack_274 = (undefined4 **)0x6dc63e;
    iVar1 = (**(code **)(*DAT_0093df00 + 0x10))();
    if (iVar1 < 0) {
      ppuStack_274 = (undefined4 **)0x8aff40;
      piStack_278 = (int *)0x6dc64e;
      FUN_006ca3d0();
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x2250) = DAT_0093cc34;
    piStack_278 = *(int **)(param_1 + 0x2248);
    ppuStack_274 = &puStack_268;
    puStack_268 = (undefined4 *)0x244;
    uStack_27c = 0x6dc680;
    (**(code **)(*piStack_278 + 0x3c))();
    if (iStack_25c == -0x3d6efb93) {
      *(undefined4 *)(param_1 + 0x2238) = 1;
    }
    else if (iStack_25c == -0x3de7fb93) {
      *(undefined4 *)(param_1 + 0x2240) = 1;
    }
    if (DAT_0093df04 != (int *)0x0) {
      uStack_27c = 3;
      puStack_280 = &DAT_0093cc38;
      *(int **)(param_1 + 0x224c) = DAT_0093df04;
      iVar1 = (**(code **)(*DAT_0093df04 + 0x10))(DAT_0093df04,&LAB_006c9e30);
      if (iVar1 < 0) {
        FUN_006ca3d0("ERROR: failed to enumerate force feedback axes for device 1\n");
        return iVar1;
      }
      *(undefined4 *)(param_1 + 0x2254) = DAT_0093cc38;
      puStack_280 = (undefined4 *)0x244;
      (**(code **)(**(int **)(param_1 + 0x2248) + 0x3c))(*(int **)(param_1 + 0x2248),&puStack_280);
      if (ppuStack_274 == (undefined4 **)0xc291046d) {
        *(undefined4 *)(param_1 + 0x223c) = 1;
      }
    }
  }
  return 0;
}

