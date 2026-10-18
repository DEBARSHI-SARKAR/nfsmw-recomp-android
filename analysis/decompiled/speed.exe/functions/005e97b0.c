/* speed.exe 005e97b0 FUN_005e97b0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005d51f0 FUN_005d51f0
 * calls 005c5e80 FUN_005c5e80
 */

void __fastcall FUN_005e97b0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float fStack_10;
  float local_c;
  float fStack_8;
  
  if ((char)param_1[0x55] == '\0') {
    fVar2 = (float10)(float)param_1[0x54];
  }
  else {
    fVar2 = (float10)FUN_006e8de0();
    fVar2 = (fVar2 - (float10)(float)param_1[0x53]) + (float10)(float)param_1[0x54];
  }
  param_1[0x54] = (int)(float)fVar2;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  if (*param_1 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*param_1);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar1 + 4) + 0x68))(&local_c);
      fVar2 = (float10)FUN_005c5e80(local_c * local_c + fStack_10 * fStack_10 + fStack_8 * fStack_8)
      ;
      param_1[0x41] = (int)(float)fVar2;
    }
  }
  return;
}

