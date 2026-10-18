/* speed.exe 00792510 FUN_00792510; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_00792510(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float local_4;
  
  local_4 = 0.0;
  FUN_0078a3a0(&local_4,0x20);
  uVar1 = FUN_007c4b80();
  puVar2 = &DAT_009b4250;
  do {
    puVar3 = puVar2;
    if (puVar2[1] == param_2) break;
    puVar2 = puVar2 + 7;
    puVar3 = (undefined4 *)0x0;
  } while ((int)puVar2 < 0x9b42a4);
  if ((float)puVar3[6] < local_4) {
    puVar3[6] = local_4;
    *(undefined2 *)(puVar3 + 2) = uVar1;
  }
  return;
}

