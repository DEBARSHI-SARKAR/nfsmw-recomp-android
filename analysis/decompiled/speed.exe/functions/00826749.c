/* speed.exe 00826749 FUN_00826749; analysis pseudocode, not buildable source.
 * calls 00824500 FUN_00824500
 * calls 0081e9e7 FUN_0081e9e7
 */

void FUN_00826749(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x5c + DAT_009c2520;
  puVar1 = (undefined4 *)FUN_0081e9e7(param_3[1]);
  (*(code *)param_3[3])(puVar1,*param_3,param_2);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_3 + 2);
  *puVar1 = param_3[4];
  puVar1[1] = param_3[5];
  *(undefined1 *)((int)puVar1 + 0x1a) = 0;
  FUN_00824500(iVar2 + 0x40,puVar1);
  return;
}

