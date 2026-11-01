body {
  margin: 0;
  font-family: Arial, sans-serif;
  background: #f4f3ff;
  color: #20263a;
  position: relative;
  isolation: isolate;
}

/* Study related background pattern */
body::before {
  content: "📚       ✏️       🎓       📖       🖊️       📐       📓       🧮       📚       🎓";
  position: fixed;
  inset: 0;
  z-index: -1;
  pointer-events: none;
  font-size: 35px;
  line-height: 125px;
  letter-spacing: 22px;
  word-spacing: 12px;
  white-space: pre-wrap;
  overflow: hidden;
  opacity: 0.13;
  color: #6658e8;
  background:
    linear-gradient(135deg, #f4f3ff, #eef2ff);
}

/* Make cards slightly transparent */
.card {
  background: rgba(255, 255, 255, 0.93);
  backdrop-filter: blur(5px);
  border: 1px solid rgba(102, 88, 232, 0.12);
  border-radius: 14px;
  box-shadow: 0 5px 20px rgba(50, 50, 100, 0.05);
}
