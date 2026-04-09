<!DOCTYPE html>
<html lang="ar" dir="rtl">
<head>
    <meta charset="UTF-8">
    <title>منصة إبداع الفنية | الإدارة والتصفح</title>
    <style>
        /* 1. المتغيرات العامة: لتسهيل تغيير الألوان في كامل الموقع من مكان واحد */
        :root {
            --onyx: #0d0d0d; /* الأسود الفخم */
            --gold: #d4af37; /* الذهبي الملكي */
            --white: #ffffff;
            --glass: rgba(255, 255, 255, 0.08); /* تأثير الزجاج الشفاف */
        }

        body {
            margin: 0;
            padding: 0;
            font-family: 'Segoe UI', Tahoma, sans-serif;
            background-color: var(--onyx);
            color: var(--white);
            overflow-x: hidden; /* منع التمرير الأفقي المزعج */
        }

        /* 2. نظام الشبكة (Grid Layout): تقسيم شاشة الموقع لمناطق محددة */
        #container {
            display: grid;
            width: 100%;
            min-height: 100vh;
            /* تقسيم العرض لـ 12 عمود متساوي */
            grid-template-columns: repeat(12, 1fr);
            /* تقسيم الطول: هيدر (80px)، محتوى (تلقائي)، وتذييل (50px) */
            grid-template-rows: 80px auto 50px;
            /* توزيع العناصر بالأسماء (n: هيدر، a: قائمة جانبية، m: محتوى، w: أخبار، f: فوتر) */
            grid-template-areas:
                "n n n n n n n n n n n n"
                "a a m m m m m m m w w w"
                "f f f f f f f f f f f f";
            gap: 15px;
            padding: 10px;
        }

        /* تنسيق الهيدر العلوي */
        nav {
            grid-area: n;
            background: var(--glass);
            backdrop-filter: blur(15px);
            display: flex;
            align-items: center;
            justify-content: space-between;
            padding: 0 50px;
            border-bottom: 2px solid var(--gold);
            border-radius: 12px;
        }

        .logo {
            font-size: 26px;
            font-weight: 900;
            color: var(--gold);
            cursor: pointer;
        }

        /* تنسيق روابط القائمة العلوية */
        .nav-links a {
            color: #bbb;
            text-decoration: none;
            padding: 8px 15px;
            margin: 0 5px;
            cursor: pointer;
            transition: 0.2s;
            border-radius: 8px;
        }

            .nav-links a:hover {
                color: var(--gold);
                background: rgba(212,175,55,0.1);
            }

        /* تنسيق القائمة الجانبية */
        aside {
            grid-area: a;
            background: var(--glass);
            padding: 20px;
            border-radius: 15px;
            border-right: 3px solid var(--gold);
        }

        .side-link {
            display: block;
            padding: 12px;
            color: #ccc;
            text-decoration: none;
            border-bottom: 1px solid #333;
            cursor: pointer;
            transition: 0.3s;
        }

            .side-link:hover {
                color: var(--gold);
                padding-right: 20px;
            }

        /* منطقة المحتوى الرئيسي وحركة الظهور (Fade In) */
        article {
            grid-area: m;
            background: var(--glass);
            padding: 40px;
            border-radius: 20px;
            min-height: 500px;
            animation: fadeIn 0.5s;
        }

        @keyframes fadeIn {
            from {
                opacity: 0;
            }

            to {
                opacity: 1;
            }
        }

        /* قسم الأخبار الجانبي */
        #news {
            grid-area: w;
            background: #1a1a1a;
            padding: 20px;
            border-radius: 15px;
        }

        /* تنسيق صندوق رفع الصور الخاص بالمالك */
        .admin-box {
            background: rgba(212,175,55,0.1);
            padding: 20px;
            border-radius: 10px;
            border: 1px dashed var(--gold);
            margin-bottom: 20px;
        }

        /* تنسيق شبكة معرض الصور */
        .gallery {
            display: grid;
            grid-template-columns: repeat(auto-fill, minmax(150px, 1fr));
            gap: 15px;
            margin-top: 20px;
        }

            .gallery img {
                width: 100%;
                height: 150px;
                object-fit: cover;
                border-radius: 8px;
                border: 2px solid #444;
                transition: 0.3s;
            }

                .gallery img:hover {
                    border-color: var(--gold);
                    transform: scale(1.02);
                }

        footer {
            grid-area: f;
            text-align: center;
            color: #444;
            padding-top: 15px;
        }

        .btn {
            background: var(--gold);
            color: #000;
            border: none;
            padding: 10px 20px;
            border-radius: 5px;
            font-weight: bold;
            cursor: pointer;
            margin-top: 10px;
        }
    </style>
</head>
<body>

    <div id="container">
        <nav>
            <div class="logo" onclick="showPage('home')">إبداع | ART</div>
            <div class="nav-links">
                <a onclick="showPage('home')">الرئيسية</a>
                <a onclick="showPage('artists')">الفنانون</a>
                <a onclick="showPage('gallery')">المعرض العام</a>
                <a onclick="showPage('admin')" style="border: 1px solid var(--gold);">لوحة المالك ⚙️</a>
            </div>
        </nav>

        <aside>
            <h3 style="color: var(--gold);">الأقسام</h3>
            <a class="side-link" onclick="showPage('oil')">الرسم الزيتي</a>
            <a class="side-link" onclick="showPage('sculpture')">النحت</a>
            <a class="side-link" onclick="showPage('calligraphy')">الخط العربي</a>
        </aside>

        <article id="main-content">
            <h1>مرحباً بك في منصة إبداع</h1>
            <p>اختر أحد الخيارات أعلاه لتصفح الموقع، أو ادخل إلى لوحة المالك لإضافة صورك الخاصة.</p>
            <div style="width:100%; height:300px; background: url('https://images.unsplash.com/photo-1513364776144-60967b0f800f?auto=format&fit=crop&w=800&q=80') center/cover; border-radius: 15px;"></div>
        </article>

        <div id="news">
            <h4 style="color: var(--gold);">أخبار الفن</h4>
            <marquee direction="up" scrollamount="2" style="height: 100px;">
                <p>• مزاد علني للوحات عالمية السبت القادم.</p>
                <p>• ندوة حول مستقبل الفن التشكيلي في العراق.</p>
                <p>• الفنان مصطفى يطلق مجموعته الجديدة.</p>
            </marquee>
        </div>

        <footer>© 2026 جميع الحقوق محفوظة لمالك الموقع</footer>
    </div>

    <script>
        /* 1. ذاكرة الصور: مصفوفة فارغة لتخزين عناوين الصور (Data URLs)
           التي ترفعها لتظل موجودة أثناء التنقل بين الأقسام.
        */
        let uploadedImages = [];

        /* 2. دالة التنقل (showPage):
           وظيفتها تغيير المحتوى داخل الـ <article> بناءً على اختيار المستخدم.
        */
        function showPage(pageId) {
            const content = document.getElementById('main-content');

            // تحضير كود الـ HTML الخاص بالصور المرفوعة لعرضه في المعرض أو لوحة التحكم
            let galleryHTML = `<div class="gallery">`;
            if (uploadedImages.length === 0) {
                galleryHTML += `<p style="color:#666;">لا توجد صور مضافة حالياً.</p>`;
            } else {
                // تكرار على كل الصور الموجودة في المصفوفة وتحويلها لوسم img
                uploadedImages.forEach(imgSrc => {
                    galleryHTML += `<img src="${imgSrc}" alt="لوحة فنية">`;
                });
            }
            galleryHTML += `</div>`;

            // قاموس يحتوي على محتوى كل صفحة
            const pages = {
                'home': `
                            <h1>الرئيسية</h1>
                            <p>هنا تجد آخر أخبار الفنانين التشكيليين وأحدث المعارض المقامة حالياً.</p>
                            <div style="width:100%; height:250px; background: #222; border-radius:15px; border:1px solid var(--gold); display:flex; align-items:center; justify-content:center;">[صورة فنية رئيسية]</div>
                        `,
                'artists': `
                            <h1>كبار الفنانين</h1>
                            <ul>
                                <li>محمد عباس كريم - تشكيلي </li>
                                <li>ابو الحسن عقيل - تشكيلي</li>
                                <li>مصطفى خالد - نحات</li>
                                <li>معالي ثامر - نحات</li>
                            </ul>
                        `,
                'gallery': `
                            <h1>المعرض العام</h1>
                            <p>استكشف اللوحات التي تمت إضافتها مؤخراً:</p>
                            ${galleryHTML}
                        `,
                'admin': `
                            <div class="admin-box">
                                <h2>لوحة تحكم المالك</h2>
                                <p>ارفع صور اللوحات الجديدة لتظهر في المعرض العام:</p>
                                <input type="file" id="imgInput" accept="image/*">
                                <br>
                                <button class="btn" onclick="handleUpload()">نشر العمل الآن</button>
                            </div>
                            <h3>معاينة أعمالك المرفوعة:</h3>
                            ${galleryHTML}
                        `,
                'oil': `<h1>الرسم الزيتي</h1><p>قسم مخصص لرواد الرسم بالألوان الزيتية وتقنياته.</p>`,
                'sculpture': `<h1>النحت</h1><p>مقالات ومعلومات حول فن النحت المعاصر.</p>`,
                'calligraphy': `<h1>الخط العربي</h1><p>جماليات الخط العربي وتوظيفه في الفن التشكيلي.</p>`
            };

            // حركة أنيميشن: إخفاء ثم تغيير المحتوى ثم إظهاره
            content.style.opacity = '0';
            setTimeout(() => {
                content.innerHTML = pages[pageId] || pages['home'];
                content.style.opacity = '1';
            }, 300);
        }

        /* 3. دالة معالجة الرفع (handleUpload):
           تستخدم تقنية FileReader لقراءة ملف الصورة من جهازك وتحويله لنص يمكن عرضه.
        */
        function handleUpload() {
            const input = document.getElementById('imgInput');

            // التأكد من أن المستخدم اختار ملفاً
            if (input.files && input.files[0]) {
                const reader = new FileReader();

                // ماذا يحدث بعد انتهاء المتصفح من قراءة الصورة؟
                reader.onload = function (e) {
                    // إضافة رابط الصورة (النتيجة) إلى مصفوفة الذاكرة الخاصة بنا
                    uploadedImages.push(e.target.result);
                    alert("تمت إضافة الصورة بنجاح إلى المعرض!");

                    // إعادة تشغيل صفحة الأدمن لتظهر الصورة الجديدة فوراً
                    showPage('admin');
                }
                // البدء بقراءة الملف كعنوان URL للبيانات
                reader.readAsDataURL(input.files[0]);
            } else {
                alert("يرجى اختيار ملف صورة أولاً");
            }
        }
    </script>

</body>
</html>
