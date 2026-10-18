/* speed.exe 0044e9b0 FUN_0044e9b0; analysis pseudocode, not buildable source.
 * calls 0044cf90 FUN_0044cf90
 * calls 0044ae10 FUN_0044ae10
 */

void FUN_0044e9b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0044ae10(1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    iVar1 = FUN_0044ae10(1);
    if (iVar1 == 0) {
      FUN_0044cf90(1,0);
    }
    else {
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
  }
  puVar2 = &DAT_0090dba4;
  do {
    if (-1 < (int)puVar2[2]) {
      (**(code **)(*(int *)*puVar2 + 0xc0))(0);
      if (0x90dc23 < (int)puVar2) {
        (**(code **)(*(int *)*puVar2 + 0x84))();
      }
    }
    puVar2 = puVar2 + 4;
  } while ((int)puVar2 < 0x90dca4);
  return;
}

