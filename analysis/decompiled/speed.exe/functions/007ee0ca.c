/* speed.exe 007ee0ca FUN_007ee0ca; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000045 GetCurrentDirectoryA
 * calls 007f0df9 FUN_007f0df9
 * calls 007edca5 FUN_007edca5
 * calls 007ee665 FUN_007ee665
 * calls 007ee41b FUN_007ee41b
 * calls 007ee5a3 FUN_007ee5a3
 * calls 007f014d FUN_007f014d
 * calls 007ed62f FUN_007ed62f
 * calls 007ee563 FUN_007ee563
 * calls 007ed17b FUN_007ed17b
 * calls 008621ee FUN_008621ee
 * calls 007ed118 FUN_007ed118
 * calls 007ec1a7 FUN_007ec1a7
 * calls 007ed751 FUN_007ed751
 */

undefined4 FUN_007ee0ca(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CHAR local_210 [512];
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  iVar3 = 0;
  if (param_1 == 0) {
    param_2 = FUN_007ed118();
    local_10 = 1;
    local_c = "File System";
    local_8 = 0;
    param_1 = (**(code **)*DAT_009076dc)(param_2,&local_10);
    DAT_009bb140 = param_1;
  }
  FUN_007f0df9(param_1,param_2);
  if (param_1 == 0) {
    DAT_009bb13c = 0;
  }
  else {
    DAT_009bb13c = FUN_007ee665();
  }
  *(int *)(DAT_009bb13c + 0x88) = DAT_009bb13c + 0x9c;
  iVar4 = DAT_009bb13c + 0x9c + DAT_009076e8 * 4;
  *(int *)(DAT_009bb13c + 0x8c) = iVar4;
  uVar2 = iVar4 + 7 + DAT_009076ec & 0xfffffff8;
  *(uint *)(DAT_009bb13c + 0x90) = uVar2;
  iVar4 = DAT_009076e4 * 0x40 + uVar2;
  *(int *)(DAT_009bb13c + 0x94) = iVar4;
  *(int *)(DAT_009bb13c + 0x98) = DAT_009076e0 * 0x20 + iVar4;
  FUN_007ec1a7();
  FUN_007ec1a7();
  iVar1 = DAT_009bb13c;
  iVar4 = *(int *)(DAT_009bb13c + 0x90);
  if (0 < DAT_009076e4) {
    do {
      FUN_007ee41b(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x40;
    } while (iVar3 < DAT_009076e4);
  }
  iVar3 = *(int *)(iVar1 + 0x94);
  iVar4 = 0;
  if (0 < DAT_009076e0) {
    do {
      FUN_007ee563(iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar4 < DAT_009076e0);
  }
  iVar3 = *(int *)(iVar1 + 0x98);
  iVar4 = 0;
  if (0 < DAT_009076f0) {
    do {
      FUN_007ee5a3(iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x84;
    } while (iVar4 < DAT_009076f0);
  }
  *(undefined4 *)(iVar1 + 0x50) = 1;
  FUN_007ec1a7();
  iVar3 = FUN_007f014d();
  FUN_007ed62f(&DAT_009bb144);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      FUN_007ed62f((&DAT_009bb1a0)[iVar4]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  GetCurrentDirectoryA(0x200,local_210);
  FUN_007ed17b(local_210);
  FUN_007edca5(**(undefined4 **)(DAT_009bb13c + 0x88));
  FUN_007ed751();
  FUN_008621ee(&LAB_007eded4);
  DAT_009bb138 = 1;
  return 1;
}

