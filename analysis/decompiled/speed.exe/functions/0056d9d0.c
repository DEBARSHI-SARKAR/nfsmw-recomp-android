/* speed.exe 0056d9d0 FUN_0056d9d0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0056d9d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xa2c);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  *(undefined4 *)(param_1 + 0xb50) = 0;
  *(undefined4 *)(param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  *(undefined4 *)(param_1 + 0xb5c) = 0;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  puVar2 = (undefined4 *)(param_1 + 0xb64);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xbb4) = 0;
  *(undefined4 *)(param_1 + 3000) = 0;
  *(undefined4 *)(param_1 + 0xbbc) = 0;
  *(undefined4 *)(param_1 + 0xbc0) = 0;
  *(undefined4 *)(param_1 + 0xbc4) = 0;
  *(undefined4 *)(param_1 + 0xbc8) = 0;
  *(undefined4 *)(param_1 + 0xbcc) = 0;
  *(undefined4 *)(param_1 + 0xbd0) = 0;
  return param_1;
}

