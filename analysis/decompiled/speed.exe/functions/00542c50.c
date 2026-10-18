/* speed.exe 00542c50 FUN_00542c50; analysis pseudocode, not buildable source.
 * calls 007f7f1e FUN_007f7f1e
 * calls 005174e0 FUN_005174e0
 * calls 00660100 FUN_00660100
 * calls 00660200 FUN_00660200
 * calls 005b7780 FUN_005b7780
 * calls 004b9080 FUN_004b9080
 * calls 00525f70 FUN_00525f70
 * calls 0064c9b0 FUN_0064c9b0
 * calls 006cb2a0 FUN_006cb2a0
 * calls 004af1e0 FUN_004af1e0
 */

void __fastcall FUN_00542c50(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x11c) == 5) {
    FUN_00525f70();
    uVar1 = (uint)(*(int *)(param_1 + 0x120) != 5);
    iVar2 = FUN_0064c9b0();
    uVar3 = uVar1;
    if (((iVar2 != 0) && (uVar3 = FUN_00660100(4,8), uVar3 != 0)) && (uVar1 == 0)) {
      iVar2 = *(int *)(param_1 + 0x120);
      while (iVar2 != 0) {
        FUN_00525f70();
        iVar2 = *(int *)(param_1 + 0x120);
      }
    }
    FUN_00660200(uVar3,4,8);
    if (uVar3 != 0) {
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x120);
      FUN_006cb2a0();
      if (*DAT_0091cadc != -0xd8) {
        for (iVar2 = *(int *)(*DAT_0091cadc + 0xe0); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
          FUN_005b7780(0xc3960eb9,0,iVar2,0xffffffff,0);
        }
      }
      FUN_004af1e0(0,6);
      FUN_004b9080(0,1,"movie_done");
      iVar2 = *(int *)(param_1 + 0x140);
      if (iVar2 != 0) {
        FUN_007f7f1e();
        (*DAT_00909e58)(iVar2);
      }
      *(undefined4 *)(param_1 + 0x140) = 0;
      FUN_005174e0(DAT_0091cb18);
      DAT_0091cb18 = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(undefined1 *)(param_1 + 0x128) = 1;
      *(undefined1 *)(param_1 + 0x129) = 0;
      *(undefined4 *)(param_1 + 300) = 0;
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
  }
  return;
}

