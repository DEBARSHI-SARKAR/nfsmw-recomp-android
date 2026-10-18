/* speed.exe 006c1410 FUN_006c1410; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000024 ResumeThread
 * calls EXTERNAL:00000025 SuspendThread
 */

void FUN_006c1410(int param_1)

{
  if (param_1 != 0) {
    ResumeThread(DAT_009bb168);
    return;
  }
  SuspendThread(DAT_009bb168);
  return;
}

